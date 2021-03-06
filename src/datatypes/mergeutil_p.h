/*
    Copyright (C) 2019 Volker Krause <vkrause@kde.org>

    This program is free software; you can redistribute it and/or modify it
    under the terms of the GNU Library General Public License as published by
    the Free Software Foundation; either version 2 of the License, or (at your
    option) any later version.

    This program is distributed in the hope that it will be useful, but WITHOUT
    ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
    FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Library General Public
    License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/

#ifndef KPUBLICTRANSPORT_MERGEUTIL_P_H
#define KPUBLICTRANSPORT_MERGEUTIL_P_H

class QDateTime;
class QString;

namespace KPublicTransport {

/** Utilities for merging objects. */
namespace MergeUtil
{
    /** Assumes lhs == rhs if both sides are valid, and prefers values with timezone information. */
    QDateTime mergeDateTime(const QDateTime &lhs, const QDateTime &rhs);

    /** Takes the longer input string. */
    QString mergeString(const QString &lhs, const QString &rhs);
}

}

#endif // KPUBLICTRANSPORT_MERGEUTIL_H
